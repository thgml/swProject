#include <stdio.h>

void changeToNum(wchar_t a)
{
	wchar_t ch;
	in[_where] = a;
	if (in[_where] == '0')
		space();
	else
	{
		while (1)
		{
			ch = getche();
			if (ch == '+')
			{
				change();
				return;
			}
			if (ch == '.') //space
			{
				_where++;
				space();
				if (eras != 0)
					eras = 0;
				now = 0;
				continue;
			}
			if (ch == '-') //지우기
			{
				if (eras == 0)
				{
					_where++;
					eras = 100;
				}
				backspace();
				now = 1;
				continue;
			}
			else
			{
				_where++;
				in[_where] = ch;
				if (eras != 0)
					eras = 0;
				now = 0;
			}
		}
	}
}
