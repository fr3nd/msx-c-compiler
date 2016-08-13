proc wait_until_compiled {} {
  puts -nonewline stderr "\x1b\[1;1f\x1b\[J"
  puts stderr [get_screen]
  if {[string first "COMPILATION DONE" [get_screen]] > 0} {
    exit
  }
  after time 10 wait_until_compiled
}

set save_settings_on_exit off
set speed 9999
set fullspeedwhenloading on
set renderer none

wait_until_compiled
