#include <stdio.h>
#include "strbuf.h"

int main()
{
	struct strbuf s = STRBUF_INIT;

	strbuf_addstr(&s, "prefix: ");
	printf("%s\n", s.buf);
	printf("s.buf: %p\n", s.buf);
	printf("sizeof(strbuf): %zu\n", sizeof(s));
	printf("s.len: %zu\n", s.len);

	for (int i = 0; i < 257; ++i)
		strbuf_addstr(&s, "a");

	printf("\n%s\n", s.buf);
	printf("s.buf: %p\n", s.buf);
	printf("sizeof(strbuf): %zu\n", sizeof(s));
	printf("s.len: %zu\n", s.len);

	strbuf_release(&s);

	return 0;
}
