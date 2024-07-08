from setuptools import setup, find_packages
setup(
    name='b15fpy',
    version='1.0.0',
    packages=find_packages(),
    package_data={'b15fpy': ['b15fpy.so']},
)

