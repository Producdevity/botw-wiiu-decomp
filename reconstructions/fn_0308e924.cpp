struct ListLink;
extern "C" void fn_0308e808(ListLink* link);

extern "C" ListLink* fn_0308e924(void* list) {
    if (*(int*)((char*)list + 8) > 0) {
        ListLink* link = *(ListLink**)((char*)list + 4);
        fn_0308e808(link);
        --*(int*)((char*)list + 8);
        return link;
    }
    return 0;
}
