struct librarymap {
  struct librarymap *next;
  abi_ulong begin;
  abi_ulong end;
  const char *name;
};

void init_librarymap(void);
void add_to_librarymap(const char *name, abi_ulong begin, abi_ulong end);
bool is_library_addr(abi_ulong addr);

