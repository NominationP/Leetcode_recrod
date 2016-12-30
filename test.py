import requests
import json

class Daiwan(object):
    """docstring for Daiwan."""

    BASE_URL = 'http://lolapi.games-cube.com'
    USER_API_URL = '/UserArea'

    token = ''

    def __init__(self, token):
        self.token = token

    def get_user_info(self, username):
        headers = {'DAIWAN-API-TOKEN': self.token }
        print self.BASE_URL + self.USER_API_URL + '?keyword=' + username
        return requests.get(self.BASE_URL + self.USER_API_URL + '?keyword=' + username, headers = headers).json()

demo = Daiwan('75BE5-FF77F-A56DE-E4FF7')
print demo.get_user_info('NominationP')