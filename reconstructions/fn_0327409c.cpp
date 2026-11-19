#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104901dc;
extern "C" RuntimeTag data_10492958;
extern "C" const RuntimeVTable data_1029cd6c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1029cd5c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029cd4c;

typedef Token<&data_104901dc, &data_10492958, &data_1029cd6c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1029cd5c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029cd4c> Type2;

extern "C" bool fn_0327409c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
