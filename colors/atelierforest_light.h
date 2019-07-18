/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1b1918", /* black   */
  [1] = "#f22c40", /* red     */
  [2] = "#5ab738", /* green   */
  [3] = "#d5911a", /* yellow  */
  [4] = "#407ee7", /* blue    */
  [5] = "#6666ea", /* magenta */
  [6] = "#00ad9c", /* cyan    */
  [7] = "#a8a19f", /* white   */

  /* 8 bright colors */
  [8]  = "#766e6b", /* black   */
  [9]  = "#f22c40", /* red     */
  [10] = "#5ab738", /* green   */
  [11] = "#d5911a", /* yellow  */
  [12] = "#407ee7", /* blue    */
  [13] = "#6666ea", /* magenta */
  [14] = "#00ad9c", /* cyan    */
  [15] = "#f1efee", /* white   */

  /* special colors */
  [256] = "#f1efee", /* background */
  [257] = "#68615e", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;

