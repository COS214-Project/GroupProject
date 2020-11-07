#ifndef CONTAINER_H
#define CONTAINER_H

class Container {

public:
	Container();

	virtual ~Container();

	virtual void show(){}

	virtual void addContainer(Container *){}
};

#endif
