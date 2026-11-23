#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104863f4;
extern "C" RuntimeTag data_10491344;
extern "C" const RuntimeVTable data_1027c880;
extern "C" unsigned data_104863d4;
extern "C" RuntimeTag data_10491348;
extern "C" const RuntimeVTable data_1027c870;
extern "C" unsigned data_104863cc;
extern "C" RuntimeTag data_1049134c;
extern "C" const RuntimeVTable data_1027c860;

typedef Token<&data_104863f4, &data_10491344, &data_1027c880> Type0;
typedef Token<&data_104863d4, &data_10491348, &data_1027c870> Type1;
typedef Token<&data_104863cc, &data_1049134c, &data_1027c860> Type2;

extern "C" bool fn_030d9210(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
