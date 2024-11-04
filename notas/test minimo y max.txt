import pytest
from numpy.ma.testutils import assert_almost_equal
import main as mn


def test_hello_world():
    assert mn.hello_world() is True


    def test_get_minimum_1():
        resultado = mn.get_minimum([3, 2, 3])
        assert resultado == 1

    def test_get_minimum_2():
        resultado = mn.get_minimum([3, 2, -9, 0])
        assert_almost_equal(resultado,-9.2, 1)
