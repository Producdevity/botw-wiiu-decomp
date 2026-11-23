#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489e80;
extern "C" RuntimeTag data_10496c08;
extern "C" const RuntimeVTable data_1033a0e4;
extern "C" unsigned data_10489e78;
extern "C" RuntimeTag data_10495dc0;
extern "C" const RuntimeVTable data_1033a0d4;
extern "C" unsigned data_10489e74;
extern "C" RuntimeTag data_10495dbc;
extern "C" const RuntimeVTable data_1033a0b4;

typedef Token<&data_10489e80, &data_10496c08, &data_1033a0e4> Type0;
typedef Token<&data_10489e78, &data_10495dc0, &data_1033a0d4> Type1;
typedef Token<&data_10489e74, &data_10495dbc, &data_1033a0b4> Type2;

extern "C" bool fn_0392d864(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
