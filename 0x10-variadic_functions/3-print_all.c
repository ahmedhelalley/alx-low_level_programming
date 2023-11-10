#include "variadic_functions.h"
/**
 * format_char - ldksjf iosdfi hiushiuv
 * @separator: kdjs ohd iuzvh
 * @ap: dsk hs iuhv
*/
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * format_int - dsj oidshiuhsi ciucv
 * @separator: sdf bjsdkihvfdv
 * @ap: kn chiuh iuvh dv
*/
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}
/**
 * format_float - sdjk osdi usdhv uisdhv
 * @separator: dshf ushd uihs huhv
 * @ap: sdkf ishv uihsuivh uvdfg
*/
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}
/**
 * format_string - sduhc iuch vuhscv uishdv
 * @separator: djsfh sudh iusdhisudh
 * @ap: sdkfh sdh ishdih
*/
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
	printf("%s%s", separator, str);
}
/**
 * print_all - dsoihf ushduisidu uhusfv
 * @format: sdjkf iusdhf iusdhfiu h
 * @...: rest of the arguments
*/
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
