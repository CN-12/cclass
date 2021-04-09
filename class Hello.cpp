#include <cstdio>
class Hello
{
	public:
	void print();
	private:
	int x;
};
void Hello::print()
{
	printf("Hello world!\n");
}
main()
{
	Hello n;
	n.print();
}
