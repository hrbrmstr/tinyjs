context("basic functionality")
test_that("we can do something", {

  eval_js("var a=10;")
  expect_that(js_get("a"), equals(10))

})
