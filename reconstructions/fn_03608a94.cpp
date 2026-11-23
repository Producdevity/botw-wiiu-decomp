#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486700;
extern "C" RuntimeTag data_10486f80;
extern "C" const RuntimeVTable data_102f908c;
extern "C" unsigned data_104866fc;
extern "C" RuntimeTag data_10486f7c;
extern "C" const RuntimeVTable data_102f904c;
extern "C" unsigned data_104866f8;
extern "C" RuntimeTag data_10486f78;
extern "C" const RuntimeVTable data_102f8f84;

typedef Token<&data_10486700, &data_10486f80, &data_102f908c> Type0;
typedef Token<&data_104866fc, &data_10486f7c, &data_102f904c> Type1;
typedef Token<&data_104866f8, &data_10486f78, &data_102f8f84> Type2;

extern "C" bool fn_03608a94(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
