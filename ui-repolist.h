#ifndef UI_REPOLIST_H
#define UI_REPOLIST_H

extern int cgit_repolist_is_visible(struct cgit_repo *repo);
extern void cgit_repolist_print_modtime(struct cgit_repo *repo);
extern int cgit_repolist_sort_repolist(char *field);

extern void cgit_print_repolist(void);
extern void cgit_print_site_readme(void);

#endif /* UI_REPOLIST_H */
