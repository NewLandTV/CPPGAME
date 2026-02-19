#include <iostream>
#include <cstring>

class Point
{
private:
	int x;
	int y;
	
public:
	Point(int initX, int initY) : x(initX), y(initY)
	{ }
	
	int getX()
	{
		return x;
	}
	
	int getY()
	{
		return y;
	}
	
	void setPosToPoint(Point* pos)
	{
		x = pos->getX();
		y = pos->getY();
	}
	
	void setPos(int newX, int newY)
	{
		x = newX;
		y = newY;
	}
	
	void setXPos(int newX)
	{
		x = newX;
	}
	
	void setYPos(int newY)
	{
		y = newY;
	}
};

class GameObject
{
private:
	Point* position;
	char* name;
	
public:
	GameObject(char* objName, Point* objPosition)
	{
		name = objName;
		position->setPosToPoint(objPosition);
	}
	
	char* getName()
	{
		return name;
	}
	
	Point* getPosition()
	{
		return position;
	}
	
	void setName(char* newName)
	{
		name = newName;
	}
	
	void setPosition(Point* newPosition)
	{
		position->setPosToPoint(newPosition);
	}
	
	~GameObject()
	{
		delete name;
		delete position;
	}
};

int main()
{
	Point* pos1(new Point(5, 3));
	
	GameObject* gameObj1(new GameObject("Game Object!", pos1));
	
	std::cout << "gameObj1 name : " << gameObj1->getName() << std::endl;
	std::cout << "gameObj1 position X : " << gameObj1->getPosition()->getX() << std::endl;
	std::cout << "gameObj1 position Y : " << gameObj1->getPosition()->getY() << std::endl;
	
	return 0;
}
