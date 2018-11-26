# Fillit

Program which will take a file as parameter, which contains a list of Tetriminos (a 4-blocks geometric figure), and arrange them in order to create the smallest square possible.

 <u>A Tetriminos must respect the following rules :</u>
• Precisely 4 lines of 4 characters, each followed by a new line (well... a 4x4 square).
• A Tetrimino is a classic piece of Tetris composed of 4 blocks.
• Each character must be either a block character(’#’ ) or an empty character (’.’).
• Each block of a Tetrimino must touch at least one other block on any of his 4 sides (up, down, left and right).

<u>A Tetrimonos file should contain between 1 and 26 Tetriminos.</u>

<b>Tetrimonos examples:</b>
....<br/>....<br/>####<br/>.##.<br/>
..##<br/>....<br/>....<br/>..##<br/>
..#.<br/>..##<br/>....<br/>....<br/>
..#.<br/>..##<br/>....<br/>....<br/>

<b>Tetrimonos example file:</b>
$> cat -e valid_sample.fillit<br/>
...#$<br/>
...#$<br/>
...#$<br/>
...#$<br/>
$<br/>
....$<br/>
....$<br/>
....$<br/>
####$<br/>
$<br/>
.###$<br/>
...#$<br/>
....$<br/>
....$<br/>
$<br/>
....$<br/>
..##$<br/>
.##.$<br/>
....$<br/>
$><br/>
