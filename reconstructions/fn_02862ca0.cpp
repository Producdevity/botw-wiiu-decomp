#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d760;
extern "C" RuntimeTag data_1048d764;
extern "C" const RuntimeVTable data_10148bb4;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10148ba4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10148b94;

typedef Token<&data_1048d760, &data_1048d764, &data_10148bb4> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10148ba4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10148b94> Type2;

extern "C" bool fn_02862ca0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
