#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104867c8;
extern "C" RuntimeTag data_1049160c;
extern "C" const RuntimeVTable data_1027a4b4;
extern "C" unsigned data_10485eec;
extern "C" RuntimeTag data_104868ec;
extern "C" const RuntimeVTable data_1027a43c;
extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_1027a42c;

typedef Token<&data_104867c8, &data_1049160c, &data_1027a4b4> Type0;
typedef Token<&data_10485eec, &data_104868ec, &data_1027a43c> Type1;
typedef Token<&data_10485ee8, &data_10486a8c, &data_1027a42c> Type2;

extern "C" bool fn_030b6ed8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
