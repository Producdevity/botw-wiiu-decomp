#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104882c4;
extern "C" RuntimeTag data_104882c8;
extern "C" const RuntimeVTable data_1003bc44;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1003bc34;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1003bc24;

typedef Token<&data_104882c4, &data_104882c8, &data_1003bc44> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1003bc34> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1003bc24> Type2;

extern "C" bool fn_02198578(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
