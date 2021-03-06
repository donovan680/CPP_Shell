/ * 
 
         C o p y r i g h t   2 0 0 8   S a r a h   V e s s e l s 
 
 
 
         T h i s   p r o g r a m   i s   f r e e   s o f t w a r e :   y o u   c a n   r e d i s t r i b u t e   i t   a n d / o r   m o d i f y 
 
         i t   u n d e r   t h e   t e r m s   o f   t h e   G N U   G e n e r a l   P u b l i c   L i c e n s e   a s   p u b l i s h e d   b y 
 
         t h e   F r e e   S o f t w a r e   F o u n d a t i o n ,   e i t h e r   v e r s i o n   3   o f   t h e   L i c e n s e ,   o r 
 
         ( a t   y o u r   o p t i o n )   a n y   l a t e r   v e r s i o n . 
 
 
 
         T h i s   p r o g r a m   i s   d i s t r i b u t e d   i n   t h e   h o p e   t h a t   i t   w i l l   b e   u s e f u l , 
 
         b u t   W I T H O U T   A N Y   W A R R A N T Y ;   w i t h o u t   e v e n   t h e   i m p l i e d   w a r r a n t y   o f 
 
         M E R C H A N T A B I L I T Y   o r   F I T N E S S   F O R   A   P A R T I C U L A R   P U R P O S E .     S e e   t h e 
 
         G N U   G e n e r a l   P u b l i c   L i c e n s e   f o r   m o r e   d e t a i l s . 
 
 
 
         Y o u   s h o u l d   h a v e   r e c e i v e d   a   c o p y   o f   t h e   G N U   G e n e r a l   P u b l i c   L i c e n s e 
 
         a l o n g   w i t h   t h i s   p r o g r a m .     I f   n o t ,   s e e   < h t t p : / / w w w . g n u . o r g / l i c e n s e s / > . 
 
 * / 
 
 # i n c l u d e   < i o s t r e a m > 
 
 # i n c l u d e   < f s t r e a m > 
 
 # i n c l u d e   < s y s / s t a t . h > 
 
 # i n c l u d e   < c e r r n o > 
 
 # i n c l u d e   < f c n t l . h > 
 
 # i n c l u d e   < u n i s t d . h > 
 
 # i n c l u d e   < s y s / t y p e s . h > 
 
 # i n c l u d e   < s y s / w a i t . h > 
 
 u s i n g   n a m e s p a c e   s t d ; 
 
 
 
 / /   W i l l   b e   u s e d   t o   c r e a t e   a n   a r r a y   t o   h o l d   i n d i v i d u a l   a r g u m e n t s   p a s s e d   b y 
 
 / /   t h e   u s e r   o n   t h e   c o m m a n d   l i n e . 
 
 c o n s t   i n t   M A X _ A R G S   =   2 5 6 ; 
 
 
 
 e n u m   P i p e R e d i r e c t   { P I P E ,   R E D I R E C T ,   N E I T H E R } ; 
 
 
 
 / /   S p l i t s   a   u s e r ' s   c o m m a n d   i n t o   t w o   c o m m a n d s ,   o r   a   c o m m a n d   a n d   a   f i l e   n a m e . 
 
 P i p e R e d i r e c t   p a r s e _ c o m m a n d ( i n t ,   c h a r * * ,   c h a r * * ,   c h a r * * ) ; 
 
 
 
 / /   P i p e s   t h e   f i r s t   c o m m a n d ' s   o u t p u t   i n t o   t h e   s e c o n d . 
 
 v o i d   p i p e _ c m d ( c h a r * * ,   c h a r * * ) ; 
 
 
 
 / /   R e a d s   i n p u t   f r o m   t h e   u s e r   i n t o   t h e   g i v e n   a r r a y   a n d   r e t u r n s   t h e   n u m b e r   o f 
 
 / /   a r g u m e n t s   t a k e n   i n . 
 
 i n t   r e a d _ a r g s ( c h a r * * ) ; 
 
 
 
 / /   R e d i r e c t s   t h e   o u t p u t   f r o m   t h e   g i v e n   c o m m a n d   i n t o   t h e   g i v e n   f i l e . 
 
 v o i d   r e d i r e c t _ c m d ( c h a r * * ,   c h a r * * ) ; 
 
 
 
 / /   G i v e n   t h e   n u m b e r   o f   a r g u m e n t s   a n d   a n   a r r a y   o f   a r g u m e n t s ,   t h i s   w i l l   e x e c u t e 
 
 / /   t h o s e   a r g u m e n t s .     T h e   f i r s t   a r g u m e n t   i n   t h e   a r r a y   s h o u l d   b e   a   c o m m a n d . 
 
 v o i d   r u n _ c m d ( i n t ,   c h a r * * ) ; 
 
 
 
 / /   G i v e n   a   s t r i n g   o f   u s e r   i n p u t ,   t h i s   w i l l   d e t e r m i n e   i f   t h e   u s e r   w a n t s   t o 
 
 / /   q u i t   t h e   s h e l l . 
 
 b o o l   w a n t _ t o _ q u i t ( s t r i n g ) ; 
