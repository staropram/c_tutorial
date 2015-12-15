#include <stdio.h>
#include "b_nested.h"
#include "b.h"
#include "c.h"
#include "d.h"
void b_nested() {
	b();
	c();
	d();
}
