#include "proxy.hpp"

int main()
{
	Subject *sub = new ConcreteSubject();
	Proxy *proxy = new Proxy(sub);
	proxy->request();

	return 0;
}
