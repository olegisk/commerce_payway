(function ($) {
	$(window).load(function () {
		var el = $('#cc_fields');
		var owner = $('[name="owner"]', el).val();
		var cc_number = $('[name="number"]', el).val();
		var exp_month = $('[name="exp_month"]', el).val();
		var exp_year = $('[name="exp_year"]', el).val();
		var ccv = $('[name="code"]', el).val();
		console.log(owner);
		console.log(cc_number);
		console.log(exp_month);
		console.log(exp_year);
		console.log(ccv);

		// Transfer to PayWay Form
		var pw = $('.payway-creditcard');
		$('.payway-name').val(owner);
		$('.payway-number-formatted').val(cc_number);
		$('.payway-month').val(exp_month);
		$('.payway-year').val(exp_year);
		$('.payway-csc').val(ccv);

		window.setTimeout(function () {
			$('#payway-creditcard-submit').click();
		}, 1000);
	});
}(jQuery));

