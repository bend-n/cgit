#ifndef UI_REFS_H
#define UI_REFS_H

extern int cgit_refs_cmp_branch_age(const void *a, const void *b);
extern int cgit_refs_cmp_ref_name(const void *a, const void *b);
extern int cgit_refs_cmp_tag_age(const void *a, const void *b);

extern void cgit_print_branches(int maxcount);
extern void cgit_print_tags(int maxcount);
extern void cgit_print_refs(void);

#endif /* UI_REFS_H */
