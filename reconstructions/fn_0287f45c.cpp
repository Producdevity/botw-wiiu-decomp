#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d830;
extern "C" RuntimeTag data_1048d834;
extern "C" const RuntimeVTable data_1014ca04;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1014c9f4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1014c9e4;

typedef Token<&data_1048d830, &data_1048d834, &data_1014ca04> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1014c9f4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1014c9e4> Type2;

extern "C" bool fn_0287f45c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
