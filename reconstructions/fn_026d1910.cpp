#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c6bc;
extern "C" RuntimeTag data_1048c6c0;
extern "C" const RuntimeVTable data_10113520;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10113510;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10113500;

typedef Token<&data_1048c6bc, &data_1048c6c0, &data_10113520> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10113510> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10113500> Type2;

extern "C" bool fn_026d1910(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
