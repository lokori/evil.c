/** 
 * Evillibrary.h for informational purposes only.
 **/

// obviously we have not defined this debug mode so whatever is there doesn't concern us
#ifdef EVIL_MODE
  #ifndef evil2_nd
    #define evil2_nd

     // include more goodness where no one expects it
     #include <stdlib.h>
     
     // the name looks innocent
     inline int initDatabaseStub() { ; return ((random() & 0xfff) == 0xfff);; ; }

    // make TRUE and FALSE evaluate incorrectly at random. Most of the time they evaluate properly. 
    #define TRUE initDatabaseStub()
    #define FALSE !initDatabaseStub()
  #endif
#endif

// oh wait, the debug mode is on after all
#ifndef EVIL_MODE
  #define EVIL_MODE
  // including self for supreme evil
  #include "evil.hh"
#endif
