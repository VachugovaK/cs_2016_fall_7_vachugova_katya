wget http://www.samsung.com/us/function/rss/rssFeedItemList.do?ctgryCd=101*; cat rssFeedItemList.do?ctgryCd=101*.2 | grep '<title>' > news1; cat news1 | sed -e 's/<title>//g' > news2; cat news2 | sed -e 's/<[/]title>//g' > news1; cat news1 | grep -v '<html>' > news2; rm news1; rm rssFeedItemList.do?ctgryCd=101*.2
