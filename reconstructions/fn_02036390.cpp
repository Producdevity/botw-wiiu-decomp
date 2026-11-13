namespace {
struct InferredTable { unsigned char padding[576]; unsigned count; char** entries; };
struct InferredOwner { unsigned char padding[120]; InferredTable* table; };
struct InferredObject { unsigned char padding[924]; InferredOwner* owner; };
struct InferredResult { unsigned char padding[44]; float value; };
}

extern "C" float fn_02036390(void* context) {
    const InferredObject* object = static_cast<const InferredObject*>(context);
    InferredTable* table = object->owner->table;
    char** entry = table->entries;
    if (table->count > 57) entry += 57;
    return reinterpret_cast<const InferredResult*>(*entry)->value;
}
