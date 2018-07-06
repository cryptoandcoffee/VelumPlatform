from distutils.core import setup
setup(name='VLMspendfrom',
      version='1.0',
      description='Command-line utility for velum "coin control"',
      author='Gavin Andresen',
      author_email='gavin@velumfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
