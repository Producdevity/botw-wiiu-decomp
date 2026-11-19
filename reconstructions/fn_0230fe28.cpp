#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489cb4;
extern "C" RuntimeTag data_10489cb0;
extern "C" const RuntimeVTable data_10082304;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100822f4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100822e4;

typedef Token<&data_10489cb4, &data_10489cb0, &data_10082304> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100822f4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100822e4> Type2;

extern "C" bool fn_0230fe28(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
