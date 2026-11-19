#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bcac;
extern "C" RuntimeTag data_1048bca8;
extern "C" const RuntimeVTable data_100ea48c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ea47c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ea46c;

typedef Token<&data_1048bcac, &data_1048bca8, &data_100ea48c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100ea47c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ea46c> Type2;

extern "C" bool fn_025a8604(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
