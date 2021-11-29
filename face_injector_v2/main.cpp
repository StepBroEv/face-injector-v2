#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"

int main()
{
	// driver init
	start_driver();
	cout << endl;

	// injector ("R6Game"- apex legends window class name)
	face_injecor_v2(xor_a("R6Game"), xor_w(default"test.dll"));

	cout << endl;
	system("pause");
}
