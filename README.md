sancov
=============

This plugin is a helper plugin for the kcov kernel feature. It inserts a __sanitizer_cov_trace_pc() call at the start of basic blocks. It supports all gcc versions with plugin support (from gcc-4.5 on).

It is based on the commit "Add fuzzing coverage support" by Dmitry Vyukov.

You can read about it more here:
 *  https://gcc.gnu.org/viewcvs/gcc?limit_changes=0&view=revision&revision=231296
 *  http://lwn.net/Articles/674854/
 *  https://github.com/google/syzkaller
 *  https://lwn.net/Articles/677764/

##### Usage

```shell
$ make run
```
