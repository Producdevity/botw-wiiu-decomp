#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104885b0;
extern "C" RuntimeTag data_104885b4;
extern "C" const RuntimeVTable data_100440a4;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10044094;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10044084;

typedef Token<&data_104885b0, &data_104885b4, &data_100440a4> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10044094> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10044084> Type2;

extern "C" bool fn_021c6468(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
