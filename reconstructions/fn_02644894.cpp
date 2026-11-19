#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c158;
extern "C" RuntimeTag data_1048c15c;
extern "C" const RuntimeVTable data_100fe540;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100fe530;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100fe520;

typedef Token<&data_1048c158, &data_1048c15c, &data_100fe540> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100fe530> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100fe520> Type2;

extern "C" bool fn_02644894(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
