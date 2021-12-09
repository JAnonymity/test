import requests as ask
from bs4 import BeautifulSoup

header={"user-agent":"Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) "
                     "Chrome/86.0.4240.198 Safari/537.36"}

url="https://www.bilibili.com/v/popular/rank/all"

result=ask.get(url,headers=header)

print(result.status_code)

# coding="gbk"

soup=BeautifulSoup(result.text,"html.parser")

title=soup.select('div[class=info]>a[class=title]')

link=soup.find_all('a','title')

play=soup.select('div[class=detail]>span[class=data-box]')

view=soup.select('div[class=detail]>span[class=data-box]:last-of-type')

up=soup.find_all('span',class_="up-name")

score=soup.select('div[class=pts]>div')

plays=[]

views=[]

ups=[]

scores=[]

links=[]

count=1
time=0


with open("title.txt",'w',encoding="utf-8") as f:
    for j in play:
        plays.append(j.text.strip())
    for k in view:
        views.append(k.text.strip())
    for h in up:
        ups.append(h.text.strip())
    for s in score:
        scores.append(s.text.strip())
    for n in link:
        links.append(n['href'])

    for i in title:
        f.write("top%d:%s\n|播放量=%s\t\t|评论量=%s\t\t|up主=%s|\t\t综合得分=%s\t\t\n链接=https:%s\n\n\n"%(count,i.text,plays[time],views[time],ups[time],scores[time],links[time]))
        count += 1
        time+=1

print("扫描结果已写入到title.txt文件中")



