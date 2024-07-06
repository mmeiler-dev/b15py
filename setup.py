from setuptools import setup, Extension

setup(
    name='b15py',
    version='1.0.0',
    packages=['b15py'],
    ext_modules=[Extension('b15py.b15py', [])],  # Empty list since extension is pre-built
    package_data={'b15py': ['b15py.so']},        # Include the pre-built .so file
    zip_safe=False
)

