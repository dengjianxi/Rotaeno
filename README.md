# Rotaeno
Calculation for the stuff of Perfect+, Perfect and score in Rotaeno
用来计算Rotaeno当中一些关于大p,小p和分数的问题

## Program 1: Calculation
Only Full Combo scores are allowed to contribute to calculation, and All Perfect scores are not recommended (can't provide much information).
Instead, you'd better use Full Combo scores with quite a few Goods.
### 1."Please insert song title here(abbreviation allowed)"
You should put the song title here. You can mark the result with the song title, and afterwards you can use screenshot to share it with others.
### 2."Please insert the following 5 numbers by order(separated by blank space, not comma): your score, the number of perfect+s, the number of perfects, the number of goods, the number of misses"
This cooperates with the screenshot of your score, for example: 1009288 1928 21 1 0
### 3.If not enough information is provided, you shall see "a < The number of Slides <= b".
Because the number of Slides must be integer, this marks how much further you shall go in order to get the accurate number of Slides.
Then you should use another score screenshot and repeat step 2.
### 3'.If enough information is provided, you shall see the following output:
"Song title: ..."  
"The number of Slides = ..."  
"The number of (other notes + 1/4 * Slides) = ..."  
"The score difference between Perfect+ and Perfect = ..."  
All above are litrally what they mean.

## 程序1: Calculation (计算分数)
只有FC成绩图可用于计算, 且不建议使用AP成绩图(提供的信息量并不大).
更好的是用Good比较多的成绩图.
### 1."Please insert song title here(abbreviation allowed)" 
在此处输入歌曲标题(最好不含中文, 以免影响输出), 会在结尾出现, 用于截图和分享信息
### 2."Please insert the following 5 numbers by order(separated by blank space, not comma): your score, the number of perfect+s, the number of perfects, the number of goods, the number of misses"
依次输入成绩图上的信息, 也就是分数, 大p, 小p, good, miss, 例如: 1009288 1928 21 1 0
### 3.信息量不够的时候会出现提示"a < The number of Slides <= b", 表示的是黄键数量的取值范围为(a, b], 因为黄键数必然是整数, 所以这可以用来说明大致还需要多少信息才能得出准确黄键数.
接下来你要换一张新的成绩图然后重复步骤2.
### 3'.信息量足够的情况下,你就可以看到如下输出:
"Song title: ..." 表示歌曲标题  
"The number of Slides = ..." 表示黄键数目  
"The number of (other notes + 1/4 * Slides) = ..." 表示"其他键+黄键/4"的数目  
"The score difference between Perfect+ and Perfect = ..." 表示大小p分数之差, 也可以理解为爆一小p扣的分数  
