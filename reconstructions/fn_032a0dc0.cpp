#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486554;
extern "C" RuntimeTag data_10492c5c;
extern "C" const RuntimeVTable data_102a2fd8;
extern "C" unsigned data_10486550;
extern "C" RuntimeTag data_104927ec;
extern "C" const RuntimeVTable data_102a2fc8;
extern "C" unsigned data_10486548;
extern "C" RuntimeTag data_104927e4;
extern "C" const RuntimeVTable data_102a2fa8;

typedef Token<&data_10486554, &data_10492c5c, &data_102a2fd8> Type0;
typedef Token<&data_10486550, &data_104927ec, &data_102a2fc8> Type1;
typedef Token<&data_10486548, &data_104927e4, &data_102a2fa8> Type2;

extern "C" bool fn_032a0dc0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
