#pragma once
using namespace System::Drawing;

class Tfigure
{
public:
	Tfigure() {};
	virtual~Tfigure() {};
	virtual void show(Graphics ^g) = 0;
	virtual void move(Graphics ^g, int dx, int dy) = 0;
	virtual void hide(Graphics ^g) = 0;
};

class TPoint : public Tfigure
{
protected:
	int x, y;
public:
	TPoint()
	{
		x = 0;
		y = 0;
	};
	TPoint(int _x, int _y)
	{
		x = _x;
		y = _y;
	};
	~TPoint() {};
	virtual void show(Graphics ^g)
	{
		g->DrawEllipse(Pens::Black, x - 1, y + 1, 2, 2);
	};
	virtual void hide(Graphics ^g)
	{
		g->DrawEllipse(Pens::White, x - 1, y + 1, 2, 2);
	};
	virtual void move(Graphics ^g, int dx, int dy)
	{
		hide(g);
		x += dx;
		y += dy;
		show(g);
	};
};


class tcircle : public TPoint
{
protected:
	int r;
public:
	tcircle(int _x, int _y, int _r) :TPoint(_x, _y)
	{
		r = _r;
	};
	tcircle() {};
	virtual void show(Graphics ^g)
	{
		g->DrawEllipse(Pens::Black, x - r, y - r, 2 * r, 2 * r);
	};
	virtual void hide(Graphics ^g)
	{
		g->DrawEllipse(Pens::White, x - r, y - r, 2 * r, 2 * r);
	};
};

class Trectangle : public TPoint
{
protected:
	int a, b;
public:
	Trectangle(int _x, int _y, int _a, int _b) :TPoint(_x, _y)
	{
		a = _a;
		b = _b;
	};
	~Trectangle() {};
	virtual void show(Graphics ^g)
	{
		g->DrawRectangle(Pens::Black, x, y, a, b);
	};
	virtual void hide(Graphics ^g)
	{
		g->DrawRectangle(Pens::White, x, y, a, b);
	};

};

class TLine : public TPoint
{
protected:
	int a, b;
public:
	TLine(int _x, int _y, int _a, int _b) :TPoint(_x, _y)
	{
		a = _a;
		b = _b;
	};
	~TLine() {};
	virtual void show(Graphics ^g)
	{
		g->DrawLine(Pens::Black, x, y, a, b);
	};
	virtual void hide(Graphics ^g)
	{
		g->DrawLine(Pens::White, x, y, a, b);
	};
	virtual void move(Graphics ^g, int dx, int dy, int da, int db)
	{
		hide(g);
		x += dx;
		y += dy;
		a += da;
		b += db;
		show(g);
	};
};