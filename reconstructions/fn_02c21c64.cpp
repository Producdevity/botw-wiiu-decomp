#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486ff8;
extern "C" RuntimeTag data_10490b28;
extern "C" const RuntimeVTable data_101c0f5c;
extern "C" unsigned data_10486208;
extern "C" RuntimeTag data_10490b24;
extern "C" const RuntimeVTable data_101c0f1c;
extern "C" unsigned data_104861f8;
extern "C" RuntimeTag data_10490b20;
extern "C" const RuntimeVTable data_101c0f0c;

typedef Token<&data_10486ff8, &data_10490b28, &data_101c0f5c> Type0;
typedef Token<&data_10486208, &data_10490b24, &data_101c0f1c> Type1;
typedef Token<&data_104861f8, &data_10490b20, &data_101c0f0c> Type2;

extern "C" bool fn_02c21c64(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
