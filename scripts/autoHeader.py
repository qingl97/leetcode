'''
Created on 3 avr. 2015

@author: Liang-Q
'''

import urllib.request
from bs4 import BeautifulSoup

if __name__ == '__main__':
    link = "https://leetcode.com/problems/excel-sheet-column-number/"
    response = urllib.request.urlopen(link)
    html = response.read().decode('utf-8');
    soup = BeautifulSoup(html, "html5lib")
    question_content = soup.select("[class~=question-content]")
    print()