#include <QTextStream>

int main(int argc, char **argv)
{
	QTextStream(stdout) << "Hello, world!" << endl;
	return 0;
}

