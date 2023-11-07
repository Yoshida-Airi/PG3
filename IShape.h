#pragma once

//図形の基底クラス
class IShape
{
public:
	virtual void size() = 0;
	virtual void draw() = 0;
};

