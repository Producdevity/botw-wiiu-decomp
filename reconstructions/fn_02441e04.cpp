#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487770;
extern "C" RuntimeTag data_10487774;
extern "C" const RuntimeVTable data_100b5fe0;
extern "C" unsigned data_10487754;
extern "C" RuntimeTag data_10487778;
extern "C" const RuntimeVTable data_100b5fd0;
extern "C" unsigned data_10486f5c;
extern "C" RuntimeTag data_104871b4;
extern "C" const RuntimeVTable data_100b5f98;

typedef Token<&data_10487770, &data_10487774, &data_100b5fe0> Type0;
typedef Token<&data_10487754, &data_10487778, &data_100b5fd0> Type1;
typedef Token<&data_10486f5c, &data_104871b4, &data_100b5f98> Type2;

extern "C" bool fn_02441e04(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
