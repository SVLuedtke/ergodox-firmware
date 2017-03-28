/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * My QWERTY layout, at the moment.  I imagine this will evolve over time.
 * Once I'm done with the Arensito layout, it may disappear altogether.
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"


// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

// LAYER 0
MATRIX_LAYER(
	// unused
	K, nop,	
	// left hand
	grave,	1, 2, 3, 4, 5,	esc,	
	tab,	quote,	comma,	period,	p,	y,	brktL,	
	shiftL,	a,	o, e, u, i,
	shiftL, semicol, q, j, k, x, lpupo1l1,
	lpupo3l3,	guiL,	bkslash, arrowL,	arrowR,	
	ctrlL,	altL,	
	nop,	nop,	home,	
	space,	del, guiL,	
	// right hand
	lpu2l2,	6,7,8,9,0,	equal,	
	brktR, f, g, c, r, l, slash,
	d, h, t, n, s, dash,
	pipe, b, m, w, v, z, shiftR,
	arrowL, arrowD, arrowU, arrowR,	guiR,	
	altR, ctrlR,
	pageU,	nop, nop,	
	pageD,	enter,	bs	
),
// LAYER 1
MATRIX_LAYER(
	// unused
	K, nop,	
	// left hand
	nop,	F1,	    F2,	    F3,	    F4,	    F5,	    F11,	
	nop,	lpu1l1,	lpu2l2,	lpu3l3,	lpu4l4,	lpu5l5,	nop,	
	nop,	lpo1l1,	lpo2l2,	lpo3l3,	lpo4l4,	lpo5l5,	
	nop,	nop,	nop,	nop,	nop,	nop,	nop,	
	nop,	nop,	nop,	nop,	nop,	
	nop,	nop,	
	nop,	nop,	nop,	
	nop,	nop,	nop,	
	// right hand
	F12,	F6,	    F7,	    F8,	    F9,	    F10,	nop,	
	nop,	lpu6l6,	lpu7l7,	lpu8l8,	lpu9l9,	nop,	nop,	
	lpo6l6, lpo7l7, lpo8l8, lpo9l9,	nop,	nop,	
	nop,	nop,	nop,	nop,	nop,	nop,	nop,	
	nop,	nop,	nop,	nop,	nop,	
	nop,	nop,	
	nop,	nop,	nop,	
	nop,	nop,	nop	
),
    MATRIX_LAYER(  // layer 2 : numpad
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     tab,      nop,      arrowU,      nop,      nop,      nop,      nop,
     nop,      arrowL,  arrowD,   arrowR,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      lpupo1l1,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       m_copy,      m_paste,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               lpo2l2,   nop,      num,      kpDiv,    kpMul,    kpSub,    nop,
               nop,      nop,      kp7,      kp8,      kp9,      kpAdd,    nop,
                         nop,      kp4,      kp5,      kp6,      kpAdd,    nop,
               nop,      nop,      kp1,      kp2,      kp3,      kpEnter,  nop,
                                   kp0,      kp0,      kpDec,    kpEnter,  nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      enter,      bs  ),

// ............................................................................
    MATRIX_LAYER(  // layer 3 : Copy Pasta
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      shiftL,   m_cut,    m_copy,   m_paste,  m_ham,    lpupo1l1,
     nop,      nop,      nop,      m_altT,   m_tab,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       lpu9l9,   enter,    tab,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                         nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
    MATRIX_LAYER(  // layer 4 : QWERTY
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   grave,        1,        2,        3,        4,        5,      esc,
     tab,        q,        w,        e,        r,        t,     dash,
  shiftL,        a,        s,        d,        f,        g,
  shiftL,        z,        x,        c,        v,        b, lpupo1l1,
lpupo3l3,     guiL,    bkslash,  arrowL,   arrowR,
                                                               ctrlL,     altL,
                                                       nop,      nop,     home,
                                                     space,      del,     guiL,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpu2l2,        6,        7,        8,        9,        0,    brktR,
             equal,        y,        u,        i,        o,        p,    brktL,
                           h,        j,        k,        l,  semicol,    quote,
              bkslash,     n,        m,    comma,   period,    slash,   shiftR,
                                arrowL,   arrowD,   arrowU,   arrowR,     guiR,
    altR,    ctrlR,
   pageU,      nop,      nop,
   pageD,    enter,    bs  ),

// ............................................................................

    MATRIX_LAYER(  // layer 5 : Fun
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      m_ham,    m_ham1,   m_ham2,   m_paul,      nop,
     nop,      nop,      nop,      nop,      nop,      nop, lpupo1l1,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                         nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................

    MATRIX_LAYER(  // layer 6 : blank
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop, lpupo1l1,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                         nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),


// ............................................................................

    MATRIX_LAYER(  // layer 7 : blank
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop, lpupo1l1,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                         nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................

    MATRIX_LAYER(  // layer 8 : blank
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop, lpupo1l1,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                         nop,      nop,      nop,      nop,      nop,      nop,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),


// ............................................................................

    MATRIX_LAYER(  // layer 9 : Games
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   grave,        1,        2,        3,        4,        5,      esc,
     tab,        q,        w,        e,        r,        t,        6,
  shiftL,        a,        s,        d,        f,        g,
    ctrlL,        z,        x,        c,        v,        b,        h,
    altL,   lpo9l9,       F5,       F9,        m,
                                                                   7,        8,
                                                       nop,      nop,        9,
                                                     space,   shiftL,        0,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpu2l2,        6,        7,        8,        9,        0,    brktR,
             equal,        y,        u,        i,        o,        p,    brktL,
                           h,        j,        k,        l,  semicol,    quote,
          lpupo1l1,        n,        m,    comma,   period,    slash,   shiftR,
                                arrowL,   arrowD,   arrowU,   arrowR,     guiR,
    altR,    ctrlR,
   pageU,      nop,      nop,
   pageD,    enter,    bs  ),
// ............................................................................
};

