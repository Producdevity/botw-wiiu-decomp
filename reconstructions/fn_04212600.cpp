#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104863d8;
extern "C" RuntimeTag data_10498a8c;
extern "C" const RuntimeVTable data_10418020;
extern "C" unsigned data_104863d4;
extern "C" RuntimeTag data_10491348;
extern "C" const RuntimeVTable data_10418010;
extern "C" unsigned data_104863cc;
extern "C" RuntimeTag data_1049134c;
extern "C" const RuntimeVTable data_10418000;

typedef Token<&data_104863d8, &data_10498a8c, &data_10418020> Type0;
typedef Token<&data_104863d4, &data_10491348, &data_10418010> Type1;
typedef Token<&data_104863cc, &data_1049134c, &data_10418000> Type2;

extern "C" bool fn_04212600(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
