#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b260;
extern "C" RuntimeTag data_1048b25c;
extern "C" const RuntimeVTable data_10153b5c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10153b4c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10153b3c;

typedef Token<&data_1048b260, &data_1048b25c, &data_10153b5c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10153b4c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10153b3c> Type2;

extern "C" bool fn_028a53a0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
